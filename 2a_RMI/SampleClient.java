import java.rmi.*;

public class SampleClient {
    public static void main(String[] args) {
        try {
            String url = "//localhost/SAMPLE-SERVER";
            SampleServer remoteObject = (SampleServer) Naming.lookup(url);
            System.out.println("Got remote object");
            System.out.println("1 + 2 = " + remoteObject.sum(1, 2));
        } catch (Exception e) {
            System.out.println("Exception: " + e.toString());
        }
    }
}
