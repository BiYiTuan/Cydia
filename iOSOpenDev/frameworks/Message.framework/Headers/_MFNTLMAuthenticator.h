/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Message-Structs.h>
#import <Message/MFSASLAuthenticator.h>


@interface _MFNTLMAuthenticator : MFSASLAuthenticator {
	NtlmGenerator *_ntlmGeneratorRef;	// 20 = 0x14
	int _ntlmError;	// 24 = 0x18
}
- (void)dealloc;	// 0x48f29
- (void)setAuthenticationState:(int)state;	// 0x48e55
- (id)responseForServerData:(id)serverData;	// 0x48c29
@end