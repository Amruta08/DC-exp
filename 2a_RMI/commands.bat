javac SampleServer.java
javac SampleServerImpl.java
javac SampleClient.java
start rmiregistry
rmic SampleServerImpl
java –Djava.security.policy=policy.all SampleServerImpl
java –Djava.security.policy=policy.all SampleClient
