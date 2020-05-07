/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVTaskDelegate.h>
#import <CoreDAV/CoreDAVPropFindTaskDelegate.h>
#import <CoreDAV/CoreDAVOptionsTaskDelegate.h>
#import <CoreDAV/CoreDAVPrincipalSearchPropertySetTaskDelegate.h>

@class NSString, NSSet, NSMutableSet, NSURL;
@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate> {
@private
	NSURL *_principalURL;	// 44 = 0x2c
	NSString *_displayName;	// 48 = 0x30
	NSURL *_resourceID;	// 52 = 0x34
	NSSet *_emailAddresses;	// 56 = 0x38
	NSSet *_collections;	// 60 = 0x3c
	NSSet *_principalSearchProperties;	// 64 = 0x40
	BOOL _isExpandPropertyReportSupported;	// 68 = 0x44
	BOOL _fetchPrincipalSearchProperties;	// 69 = 0x45
	BOOL _shouldIgnoreHomeSetOnDifferentHost;	// 70 = 0x46
	NSMutableSet *_redirectHistory;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost;	// G=0x140b1; S=0x140c1; @synthesize=_shouldIgnoreHomeSetOnDifferentHost
@property(assign, nonatomic) id<CoreDAVGetAccountPropertiesTaskGroupDelegate> delegate;	// @dynamic
@property(assign) BOOL fetchPrincipalSearchProperties;	// G=0x14081; S=0x14091; @synthesize=_fetchPrincipalSearchProperties
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x14071; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) NSSet *principalSearchProperties;	// G=0x140a1; @synthesize=_principalSearchProperties
@property(readonly, assign) NSSet *collections;	// G=0x14061; @synthesize=_collections
@property(readonly, assign) NSSet *emailAddresses;	// G=0x14051; @synthesize=_emailAddresses
@property(readonly, assign) NSURL *resourceID;	// G=0x14041; @synthesize=_resourceID
@property(readonly, assign) NSString *displayName;	// G=0x14031; @synthesize=_displayName
@property(readonly, assign) NSURL *principalURL;	// G=0x14021; @synthesize=_principalURL
// declared property setter: - (void)setShouldIgnoreHomeSetOnDifferentHost:(BOOL)ignoreHomeSetOnDifferentHost;	// 0x140c1
// declared property getter: - (BOOL)shouldIgnoreHomeSetOnDifferentHost;	// 0x140b1
// declared property getter: - (id)principalSearchProperties;	// 0x140a1
// declared property setter: - (void)setFetchPrincipalSearchProperties:(BOOL)properties;	// 0x14091
// declared property getter: - (BOOL)fetchPrincipalSearchProperties;	// 0x14081
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x14071
// declared property getter: - (id)collections;	// 0x14061
// declared property getter: - (id)emailAddresses;	// 0x14051
// declared property getter: - (id)resourceID;	// 0x14041
// declared property getter: - (id)displayName;	// 0x14031
// declared property getter: - (id)principalURL;	// 0x14021
- (void)task:(id)task didFinishWithError:(id)error;	// 0x13e61
- (void)searchPropertySetTask:(id)task completetWithPropertySearchSet:(id)propertySearchSet error:(id)error;	// 0x13d99
- (void)processPrincipalHeaders:(id)headers;	// 0x13c4d
- (void)coaxServerForPrincipalHeaders;	// 0x13a25
- (void)propFindTask:(id)task parsedResponses:(id)responses error:(id)error;	// 0x1359d
- (BOOL)forceOptionsRequest;	// 0x13599
- (void)_taskCompleted:(id)completed withError:(id)error;	// 0x13541
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x12fc9
- (void)startTaskGroup;	// 0x12e89
- (id)homeSet;	// 0x12e85
- (id)_copyAccountPropertiesPropFindElements;	// 0x12d05
- (void)taskGroupWillCancelWithError:(id)taskGroup;	// 0x12c99
- (id)description;	// 0x12b99
- (void)dealloc;	// 0x12ad5
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x12a59
@end