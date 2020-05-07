/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OCDDelayedNodeContext.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface EBSheetContext : XXUnknownSuperclass <OCDDelayedNodeContext> {
@private
	EBReaderSheetState *mSheetState;	// 4 = 0x4
	unsigned mSheetIndex;	// 8 = 0x8
}
- (id)initWithSheetIndex:(unsigned)sheetIndex state:(id)state;	// 0xe7109
- (void)dealloc;	// 0xf7a15
- (bool)loadDelayedNode:(id)node;	// 0xe7de1
@end