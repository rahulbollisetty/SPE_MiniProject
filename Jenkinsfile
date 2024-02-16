pipeline {
    agent any

    environment {
        DOCKER_IMAGE_NAME = 'calculator_cpp'
        GITHUB_REPO_URL = 'https://github.com/rahulbollisetty/SPE_MiniProject.git'
    }

    stages {
        stage('Checkout') {
            steps {
                script {
                    // Checkout the code from the GitHub repository
                    git branch: 'main', url: "${GITHUB_REPO_URL}"
                }
            }
        }

        stage('Run Unit tests') {
            steps {
                script {
                    sh 'cd test'
                    sh 'cmake -S . -B build'
                    sh 'cmake --build build -j 12'
                    sh 'GTEST_COLOR=1 ctest --test-dir build --output-on-failure -j12'
                }
            }
        }

        stage('Build Docker Image') {
            steps {
                script {
                    // Build Docker image
                    docker.build("${DOCKER_IMAGE_NAME}", '.')
                }
            }
        }

        stage('Push Docker Images') {
            steps {
                script{
                    docker.withRegistry('', 'Docker_hub_cred') {
                    sh 'docker tag calculator_cpp rahulb2180/calculator_cpp:latest'
                    sh 'docker push rahulb2180/calculator_cpp'
                    }
                 }
            }
        }

        stage('Run Ansible Playbook') {
            steps {
                script {
                    ansiblePlaybook(
                        playbook: 'deploy.yml',
                        inventory: 'inventory'
                     )
                }
            }
        }

    }
}