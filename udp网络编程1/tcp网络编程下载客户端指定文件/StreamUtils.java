import java.io.BufferedReader;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;
import java.io.InputStreamReader;

public class StreamUtils {
    public static void main(String[] args) {
        StreamUtils s=new StreamUtils();
        // s.stream_string(is)
        
    }
    public static byte[] stream_to_bytearray(InputStream is) throws Exception
    {
        ByteArrayOutputStream bos=new ByteArrayOutputStream();
        byte temp[]=new byte[1024];
        int flag;
        while((flag=is.read(temp))!=-1)
        {
            bos.write(temp, 0, flag);
        }
        byte last[]=bos.toByteArray();
        bos.close();
        return last;
    }
    public static String stream_string(InputStream is) throws Exception
    {
        BufferedReader reader=new BufferedReader(new InputStreamReader(is));
        StringBuilder builder=new StringBuilder();
        String line;
        while((line=reader.readLine())!=null)
        {
            builder.append(line+"\r\n");
        }
        return builder.toString();
    }
}
