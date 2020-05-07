/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/AppSupport-Structs.h>
#import <AppSupport/XXUnknownSuperclass.h>

@class NSString, NSLock;

@interface _ReachabilityRequest : XXUnknownSuperclass {
	NSLock *_lock;	// 4 = 0x4
	NSString *_hostname;	// 8 = 0x8
	SCNetworkReachabilityRef _reachability;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
	CFDictionaryRef _observers;	// 20 = 0x14
	BOOL _isReachable;	// 24 = 0x18
	BOOL _receivedAtLeastOneCallback;	// 25 = 0x19
}
@property(assign, nonatomic) NSString *hostname;	// G=0x13179; S=0x13189; @synthesize=_hostname
- (id)initWithHostname:(id)hostname;	// 0x13791
- (void)dealloc;	// 0x13715
- (id)description;	// 0x13199
- (void)reachabilityChangedWithFlags:(unsigned)flags;	// 0x134d5
- (void)addObserver:(id)observer selector:(SEL)selector;	// 0x13331
- (void)removeObserver:(id)observer;	// 0x13255
- (BOOL)hasObservers;	// 0x131fd
// declared property getter: - (id)hostname;	// 0x13179
// declared property setter: - (void)setHostname:(id)hostname;	// 0x13189
@end