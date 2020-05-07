/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class NSString, UIImage;

@interface IUSimpleGroupCellConfiguration : IUArrayCellConfiguration {
}
@property(retain, nonatomic) NSString *title;	// G=0x21e89; S=0x21e29; 
@property(retain, nonatomic) NSString *subtitle;	// G=0x21e75; S=0x21ddd; 
@property(retain, nonatomic) UIImage *artwork;	// G=0x21d7d; S=0x21d91; 
+ (float)rowHeightForGlobalContext:(id)globalContext;	// 0x21b89
// declared property getter: - (id)title;	// 0x21e89
// declared property getter: - (id)subtitle;	// 0x21e75
// declared property setter: - (void)setTitle:(id)title;	// 0x21e29
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x21ddd
// declared property setter: - (void)setArtwork:(id)artwork;	// 0x21d91
// declared property getter: - (id)artwork;	// 0x21d7d
- (void)reloadLayoutInformation;	// 0x21c29
- (void)reloadData;	// 0x21c19
- (id)fontForLabelAtIndex:(unsigned)index;	// 0x21be5
- (id)colorForLabelAtIndex:(unsigned)index withModifiers:(unsigned)modifiers;	// 0x21b91
- (id)init;	// 0x21b59
@end