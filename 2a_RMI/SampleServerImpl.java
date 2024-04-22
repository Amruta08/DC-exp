import java.rmi.*;
import java.rmi.registry.*;

public class SampleServerImpl implements SampleServer {
    SampleServerImpl() {}

    public int sum(int a, int b) throws RemoteException {
        return (a + b);
    }

    public static void main(String args[]) {
        try {
            SampleServerImpl server = new SampleServerImpl();
            Registry registry = LocateRegistry.createRegistry(1099);
            registry.rebind("SAMPLE-SERVER", server);
            System.out.println("Server waiting.....");
        } catch (RemoteException re) {
            System.out.println("Remote exception: " + re.toString());
        }
    }
}
