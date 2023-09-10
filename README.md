# gh

##kjgvfaga
akhdsgfvasd
A TLS handshake is the initiation process for establishing a secure communication session using TLS encryption. This handshake involves a series of messages exchanged between two parties to verify each other's identity, determine encryption algorithms, and agree on session keys.

The handshake begins with the client sending a "Client Hello" message to the server, expressing its intent to establish a session. In response, the server sends a "Server Hello" along with its certificate for authentication and a Server Key. The client uses this Server Key to encrypt a "Client Key Exchange" message later in the process. When the server is ready, it signals with a "Server Hello Done" message, indicating it awaits the client's response.

The client then replies with its "Client Key," and in return, is issued a "New Session Ticket." This marks the successful establishment of the TLS session, allowing both the server and client to securely exchange application data.
A TLS handshake is the process that kicks off a communication 
session that uses TLS encryption. During a TLS handshake, the two 
communicating sides exchange messages to acknowledge each other, verify 
each other, establish the encryption algorithms they will use, and agree on 
session keys. The first message in the TLS Handshake is the Client Hello which 
is sent by the client to initiate a session with the server. In return, the server
responds with Server Hello and the Server Certificate (for authentication) along 
with a Server Key, which is used by the client to encrypt Client Key Exchange 
later in the process. Server Hello Done is an indication that the server is done 
and is now awaiting the client’s response. The client responds with the Client 
Key and is issued a New Session Ticket. The TLS session is now established, and
application data can be exchanged between both the server and the client.
