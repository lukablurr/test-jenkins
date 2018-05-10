pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                make
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
                ./test 10 0
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
