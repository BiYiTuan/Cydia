/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary, SFUZipArchive;

__attribute__((visibility("hidden")))
@interface CPBundleResourcePackage : XXUnknownSuperclass {
@private
	SFUZipArchive *mZipArchive;	// 4 = 0x4
	NSMutableDictionary *mEntryMap;	// 8 = 0x8
}
- (id)initWithZipArchive:(id)zipArchive;	// 0x1afd55
- (void)dealloc;	// 0x2c9bf5
- (id)entryWithName:(id)name;	// 0x1afddd
@end