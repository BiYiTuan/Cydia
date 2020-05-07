/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>
#import <iAdCore/iAdCore-Structs.h>
#import <iAdCore/ADWebViewDelegate.h>

@class NSSet, UIImageView, ADAdSpecification, ADBannerData, ADBannerJSO, ADBrandingFrame, ADWebView, NSString;
@protocol AdSheetBannerViewDelegate;

@interface ADSRVBannerView : XXUnknownSuperclass <ADWebViewDelegate> {
@private
	id<AdSheetBannerViewDelegate> _delegate;	// 48 = 0x30
	BOOL _privilegedClient;	// 52 = 0x34
	ADBannerData *_currentBanner;	// 56 = 0x38
	NSSet *_requiredContentSizeIdentifiers;	// 60 = 0x3c
	NSString *_currentContentSizeIdentifier;	// 64 = 0x40
	NSString *_advertisingSection;	// 68 = 0x44
	NSString *_authenticationUserName;	// 72 = 0x48
	ADAdSpecification *_specification;	// 76 = 0x4c
	ADBannerData *_nextBannerInfo;	// 80 = 0x50
	CGSize _orientedScreenSize;	// 84 = 0x54
	ADWebView *_adContainer;	// 92 = 0x5c
	ADWebView *_nextContainer;	// 96 = 0x60
	ADBrandingFrame *_bannerFrame;	// 100 = 0x64
	unsigned _impressionSequence;	// 104 = 0x68
	unsigned _overclickCount;	// 108 = 0x6c
	CGRect _previousBounds;	// 112 = 0x70
	CGPoint _clickPoint;	// 128 = 0x80
	int _creativeType;	// 136 = 0x88
	BOOL _paused;	// 140 = 0x8c
	double _startTime;	// 144 = 0x90
	double _currentBannerReferenceTime;	// 152 = 0x98
	double _currentBannerVisibleTime;	// 160 = 0xa0
	BOOL _waitingForFirstLoadAttempt;	// 168 = 0xa8
	BOOL _landingPageIsActive;	// 169 = 0xa9
	BOOL _specificationUpdateNeeded;	// 170 = 0xaa
	BOOL _needsToLogImpression;	// 171 = 0xab
	BOOL _shouldTransitionOnWebLoad;	// 172 = 0xac
	BOOL _shouldLoadBannerWhenServerStatusChanges;	// 173 = 0xad
	ADBannerData *_localAd;	// 176 = 0xb0
	ADBannerJSO *_bannerJSO;	// 180 = 0xb4
	UIImageView *_interstitialDismissButton;	// 184 = 0xb8
	UIImageView *_interstitialCornerImage;	// 188 = 0xbc
	BOOL _contentVisible;	// 192 = 0xc0
	double _lastVisibleTime;	// 196 = 0xc4
	BOOL _inWindow;	// 204 = 0xcc
	double _lastInWindowTime;	// 208 = 0xd0
	BOOL _interstitialPresentedInView;	// 216 = 0xd8
	BOOL _hasSentVisibleNoContentError;	// 217 = 0xd9
}
@property(assign) BOOL hasSentVisibleNoContentError;	// G=0x2c6b1; S=0x2c6c1; @synthesize=_hasSentVisibleNoContentError
@property(assign) BOOL shouldLoadBannerWhenServerStatusChanges;	// G=0x2c4b5; S=0x2c4c5; @synthesize=_shouldLoadBannerWhenServerStatusChanges
@property(assign) BOOL shouldTransitionOnWebLoad;	// G=0x2c495; S=0x2c4a5; @synthesize=_shouldTransitionOnWebLoad
@property(assign) BOOL needsToLogImpression;	// G=0x2c475; S=0x2c485; @synthesize=_needsToLogImpression
@property(assign) BOOL specificationUpdateNeeded;	// G=0x2c455; S=0x2c465; @synthesize=_specificationUpdateNeeded
@property(assign) BOOL landingPageIsActive;	// G=0x2c435; S=0x2c445; @synthesize=_landingPageIsActive
@property(assign) BOOL waitingForFirstLoadAttempt;	// G=0x2c415; S=0x2c425; @synthesize=_waitingForFirstLoadAttempt
@property(retain, nonatomic) UIImageView *interstitialCornerImage;	// G=0x2c54d; S=0x2c55d; @synthesize=_interstitialCornerImage
@property(retain, nonatomic) UIImageView *interstitialDismissButton;	// G=0x2c519; S=0x2c529; @synthesize=_interstitialDismissButton
@property(retain, nonatomic) ADBannerJSO *bannerJSO;	// G=0x2c4e5; S=0x2c4f5; @synthesize=_bannerJSO
@property(assign) double currentBannerVisibleTime;	// G=0x2c3ad; S=0x2c3e1; @synthesize=_currentBannerVisibleTime
@property(assign) double currentBannerReferenceTime;	// G=0x2c345; S=0x2c379; @synthesize=_currentBannerReferenceTime
@property(assign) double startTime;	// G=0x2c2dd; S=0x2c311; @synthesize=_startTime
@property(assign) CGRect previousBounds;	// G=0x2c251; S=0x2c275; @synthesize=_previousBounds
@property(retain, nonatomic) ADBrandingFrame *bannerFrame;	// G=0x2c1fd; S=0x2c20d; @synthesize=_bannerFrame
@property(retain, nonatomic) ADWebView *nextContainer;	// G=0x2c1ed; S=0x2a581; @synthesize=_nextContainer
@property(assign) CGSize orientedScreenSize;	// G=0x2c1ad; S=0x2c1c9; @synthesize=_orientedScreenSize
@property(retain, nonatomic) ADBannerData *nextBannerInfo;	// G=0x2c179; S=0x2c189; @synthesize=_nextBannerInfo
@property(readonly, assign, nonatomic) double timeRemaining;	// G=0x2abf1; 
@property(assign) double lastInWindowTime;	// G=0x2c629; S=0x2c65d; @synthesize=_lastInWindowTime
@property(assign) BOOL inWindow;	// G=0x2c609; S=0x2c619; @synthesize=_inWindow
@property(assign) double lastVisibleTime;	// G=0x2c5a1; S=0x2c5d5; @synthesize=_lastVisibleTime
@property(assign) BOOL contentVisible;	// G=0x2c581; S=0x2c591; @synthesize=_contentVisible
@property(assign) BOOL interstitialPresentedInView;	// G=0x2c691; S=0x2c6a1; @synthesize=_interstitialPresentedInView
@property(assign, nonatomic) BOOL paused;	// G=0x2c2bd; S=0x2c2cd; @synthesize=_paused
@property(assign, nonatomic) int creativeType;	// G=0x2c2ad; S=0x2a075; @synthesize=_creativeType
@property(readonly, assign, nonatomic) CGPoint clickPoint;	// G=0x2c291; @synthesize=_clickPoint
@property(retain, nonatomic) ADBannerData *localAd;	// G=0x2c4d5; S=0x2bbfd; @synthesize=_localAd
@property(retain, nonatomic) ADWebView *adContainer;	// G=0x2c1dd; S=0x2a52d; @synthesize=_adContainer
@property(readonly, assign, nonatomic) unsigned overclickCount;	// G=0x2c241; @synthesize=_overclickCount
@property(readonly, assign, nonatomic) unsigned impressionSequence;	// G=0x2c231; @synthesize=_impressionSequence
@property(retain, nonatomic) ADBannerData *currentBanner;	// G=0x2c0d1; S=0x2a361; @synthesize=_currentBanner
@property(retain, nonatomic) ADAdSpecification *specification;	// G=0x2c145; S=0x2c155; @synthesize=_specification
@property(assign, nonatomic, getter=isPrivilegedClient) BOOL privilegedClient;	// G=0x2c0b1; S=0x2c0c1; @synthesize=_privilegedClient
@property(readonly, assign, nonatomic, getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;	// G=0x2a51d; 
@property(copy, nonatomic) NSString *authenticationUserName;	// G=0x2c111; S=0x2c121; @synthesize=_authenticationUserName
@property(copy, nonatomic) NSString *advertisingSection;	// G=0x2c101; S=0x2a4ad; @synthesize=_advertisingSection
@property(copy, nonatomic) NSString *currentContentSizeIdentifier;	// G=0x2c0f1; S=0x2a251; @synthesize=_currentContentSizeIdentifier
@property(copy, nonatomic) NSSet *requiredContentSizeIdentifiers;	// G=0x2c0e1; S=0x2a0b1; @synthesize=_requiredContentSizeIdentifiers
@property(assign, nonatomic) id<AdSheetBannerViewDelegate> delegate;	// G=0x2c091; S=0x2c0a1; @synthesize=_delegate
+ (id)bannerViewWithDefaultValues;	// 0x29579
// declared property setter: - (void)setHasSentVisibleNoContentError:(BOOL)error;	// 0x2c6c1
// declared property getter: - (BOOL)hasSentVisibleNoContentError;	// 0x2c6b1
// declared property setter: - (void)setInterstitialPresentedInView:(BOOL)view;	// 0x2c6a1
// declared property getter: - (BOOL)interstitialPresentedInView;	// 0x2c691
// declared property setter: - (void)setLastInWindowTime:(double)windowTime;	// 0x2c65d
// declared property getter: - (double)lastInWindowTime;	// 0x2c629
// declared property setter: - (void)setInWindow:(BOOL)window;	// 0x2c619
// declared property getter: - (BOOL)inWindow;	// 0x2c609
// declared property setter: - (void)setLastVisibleTime:(double)time;	// 0x2c5d5
// declared property getter: - (double)lastVisibleTime;	// 0x2c5a1
// declared property setter: - (void)setContentVisible:(BOOL)visible;	// 0x2c591
// declared property getter: - (BOOL)contentVisible;	// 0x2c581
// declared property setter: - (void)setInterstitialCornerImage:(id)image;	// 0x2c55d
// declared property getter: - (id)interstitialCornerImage;	// 0x2c54d
// declared property setter: - (void)setInterstitialDismissButton:(id)button;	// 0x2c529
// declared property getter: - (id)interstitialDismissButton;	// 0x2c519
// declared property setter: - (void)setBannerJSO:(id)jso;	// 0x2c4f5
// declared property getter: - (id)bannerJSO;	// 0x2c4e5
// declared property getter: - (id)localAd;	// 0x2c4d5
// declared property setter: - (void)setShouldLoadBannerWhenServerStatusChanges:(BOOL)loadBannerWhenServerStatusChanges;	// 0x2c4c5
// declared property getter: - (BOOL)shouldLoadBannerWhenServerStatusChanges;	// 0x2c4b5
// declared property setter: - (void)setShouldTransitionOnWebLoad:(BOOL)transitionOnWebLoad;	// 0x2c4a5
// declared property getter: - (BOOL)shouldTransitionOnWebLoad;	// 0x2c495
// declared property setter: - (void)setNeedsToLogImpression:(BOOL)logImpression;	// 0x2c485
// declared property getter: - (BOOL)needsToLogImpression;	// 0x2c475
// declared property setter: - (void)setSpecificationUpdateNeeded:(BOOL)needed;	// 0x2c465
// declared property getter: - (BOOL)specificationUpdateNeeded;	// 0x2c455
// declared property setter: - (void)setLandingPageIsActive:(BOOL)active;	// 0x2c445
// declared property getter: - (BOOL)landingPageIsActive;	// 0x2c435
// declared property setter: - (void)setWaitingForFirstLoadAttempt:(BOOL)firstLoadAttempt;	// 0x2c425
// declared property getter: - (BOOL)waitingForFirstLoadAttempt;	// 0x2c415
// declared property setter: - (void)setCurrentBannerVisibleTime:(double)time;	// 0x2c3e1
// declared property getter: - (double)currentBannerVisibleTime;	// 0x2c3ad
// declared property setter: - (void)setCurrentBannerReferenceTime:(double)time;	// 0x2c379
// declared property getter: - (double)currentBannerReferenceTime;	// 0x2c345
// declared property setter: - (void)setStartTime:(double)time;	// 0x2c311
// declared property getter: - (double)startTime;	// 0x2c2dd
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x2c2cd
// declared property getter: - (BOOL)paused;	// 0x2c2bd
// declared property getter: - (int)creativeType;	// 0x2c2ad
// declared property getter: - (CGPoint)clickPoint;	// 0x2c291
// declared property setter: - (void)setPreviousBounds:(CGRect)bounds;	// 0x2c275
// declared property getter: - (CGRect)previousBounds;	// 0x2c251
// declared property getter: - (unsigned)overclickCount;	// 0x2c241
// declared property getter: - (unsigned)impressionSequence;	// 0x2c231
// declared property setter: - (void)setBannerFrame:(id)frame;	// 0x2c20d
// declared property getter: - (id)bannerFrame;	// 0x2c1fd
// declared property getter: - (id)nextContainer;	// 0x2c1ed
// declared property getter: - (id)adContainer;	// 0x2c1dd
// declared property setter: - (void)setOrientedScreenSize:(CGSize)size;	// 0x2c1c9
// declared property getter: - (CGSize)orientedScreenSize;	// 0x2c1ad
// declared property setter: - (void)setNextBannerInfo:(id)info;	// 0x2c189
// declared property getter: - (id)nextBannerInfo;	// 0x2c179
// declared property setter: - (void)setSpecification:(id)specification;	// 0x2c155
// declared property getter: - (id)specification;	// 0x2c145
// declared property setter: - (void)setAuthenticationUserName:(id)name;	// 0x2c121
// declared property getter: - (id)authenticationUserName;	// 0x2c111
// declared property getter: - (id)advertisingSection;	// 0x2c101
// declared property getter: - (id)currentContentSizeIdentifier;	// 0x2c0f1
// declared property getter: - (id)requiredContentSizeIdentifiers;	// 0x2c0e1
// declared property getter: - (id)currentBanner;	// 0x2c0d1
// declared property setter: - (void)setPrivilegedClient:(BOOL)client;	// 0x2c0c1
// declared property getter: - (BOOL)isPrivilegedClient;	// 0x2c0b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2c0a1
// declared property getter: - (id)delegate;	// 0x2c091
- (void)adWebView:(id)view hadScriptErrorWithInfo:(id)info;	// 0x2c015
- (void)loadNewBannerWebView;	// 0x2bfd5
- (id)transferWebViewForTransition;	// 0x2bf71
- (void)uiWebView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x2be9d
- (void)uiWebView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x2be31
- (void)webView:(id)view didFailLoadWithError:(id)error;	// 0x2be0d
- (void)webViewDidFinishLoad:(id)webView;	// 0x2bd51
- (void)_handleError:(id)error;	// 0x2bcd9
// declared property setter: - (void)setLocalAd:(id)ad;	// 0x2bbfd
- (void)cacheFailedToLoadBanner:(id)loadBanner withError:(id)error;	// 0x2bbc9
- (void)cacheLoadedBannerData:(id)data;	// 0x2b9c9
- (void)layoutSubviews;	// 0x2b8a5
- (void)updateHTML5ContainerOrientation;	// 0x2b7f1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2b78d
- (id)viewForBanner:(id)banner;	// 0x2b5d9
- (void)_transitionToNextBanner;	// 0x2af3d
- (void)_trackClick;	// 0x2aebd
- (void)_logImpression;	// 0x2ae39
- (void)_showInterstitialDismissButton;	// 0x2acd1
- (void)_retryLoading:(id)loading;	// 0x2ac91
// declared property getter: - (double)timeRemaining;	// 0x2abf1
- (void)processCurrentVisibility:(BOOL)visibility inWindow:(BOOL)window fastCheck:(BOOL)check;	// 0x2a855
- (void)_contentDidDisappear;	// 0x2a78d
- (void)_contentDidAppear;	// 0x2a6b5
- (void)_loadBannerNow;	// 0x2a651
- (void)_resetTimeMarkers;	// 0x2a61d
- (void)clientApplicationWillEnterForeground;	// 0x2a5d5
// declared property setter: - (void)setNextContainer:(id)container;	// 0x2a581
// declared property setter: - (void)setAdContainer:(id)container;	// 0x2a52d
// declared property getter: - (BOOL)isBannerViewActionInProgress;	// 0x2a51d
// declared property setter: - (void)setAdvertisingSection:(id)section;	// 0x2a4ad
// declared property setter: - (void)setCurrentBanner:(id)banner;	// 0x2a361
// declared property setter: - (void)setCurrentContentSizeIdentifier:(id)identifier;	// 0x2a251
// declared property setter: - (void)setRequiredContentSizeIdentifiers:(id)identifiers;	// 0x2a0b1
// declared property setter: - (void)setCreativeType:(int)type;	// 0x2a075
- (void)interstitialTouchedDismissAreaWithControlEvent:(unsigned)controlEvent;	// 0x29f25
- (void)interstitialViewRemovedFromSuperview;	// 0x29ebd
- (void)setHostFrame:(CGRect)frame orientation:(int)orientation;	// 0x29db5
- (void)dispose;	// 0x29d61
- (void)landingPageDidPresent;	// 0x29d31
- (void)landingPageDidDismiss;	// 0x29d1d
- (void)beginActionWithClick:(CGPoint)click;	// 0x29c61
- (id)initWithFrame:(CGRect)frame;	// 0x298b1
- (void)_scheduleUpdateSpecification;	// 0x29821
- (void)_updateSpecification;	// 0x29721
- (id)_adSpecification;	// 0x29609
- (void)dealloc;	// 0x293a5
@end