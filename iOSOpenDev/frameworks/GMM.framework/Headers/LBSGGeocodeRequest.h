/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/XXUnknownSuperclass.h>

@class LBSGRectangle;

@interface LBSGGeocodeRequest : XXUnknownSuperclass {
	BOOL _hasNumFeatureLimit;	// 4 = 0x4
	unsigned _numFeatureLimit;	// 8 = 0x8
	BOOL _hasIncludeBoundingBoxes;	// 12 = 0xc
	BOOL _includeBoundingBoxes;	// 13 = 0xd
	LBSGRectangle *_boundingBox;	// 16 = 0x10
	BOOL _hasAddressLinesLimit;	// 20 = 0x14
	int _addressLinesLimit;	// 24 = 0x18
}
@property(assign, nonatomic) int addressLinesLimit;	// G=0x2c179; S=0x2c19d; @synthesize=_addressLinesLimit
@property(assign, nonatomic) BOOL hasAddressLinesLimit;	// G=0x2c725; S=0x2c735; @synthesize=_hasAddressLinesLimit
@property(retain, nonatomic) LBSGRectangle *boundingBox;	// G=0x2c6f1; S=0x2c701; @synthesize=_boundingBox
@property(readonly, assign, nonatomic) BOOL hasBoundingBox;	// G=0x2c161; 
@property(assign, nonatomic) BOOL includeBoundingBoxes;	// G=0x2c119; S=0x2c13d; @synthesize=_includeBoundingBoxes
@property(assign, nonatomic) BOOL hasIncludeBoundingBoxes;	// G=0x2c6d1; S=0x2c6e1; @synthesize=_hasIncludeBoundingBoxes
@property(assign, nonatomic) unsigned numFeatureLimit;	// G=0x2c0d1; S=0x2c0f5; @synthesize=_numFeatureLimit
@property(assign, nonatomic) BOOL hasNumFeatureLimit;	// G=0x2c6b1; S=0x2c6c1; @synthesize=_hasNumFeatureLimit
// declared property setter: - (void)setHasAddressLinesLimit:(BOOL)limit;	// 0x2c735
// declared property getter: - (BOOL)hasAddressLinesLimit;	// 0x2c725
// declared property setter: - (void)setBoundingBox:(id)box;	// 0x2c701
// declared property getter: - (id)boundingBox;	// 0x2c6f1
// declared property setter: - (void)setHasIncludeBoundingBoxes:(BOOL)boxes;	// 0x2c6e1
// declared property getter: - (BOOL)hasIncludeBoundingBoxes;	// 0x2c6d1
// declared property setter: - (void)setHasNumFeatureLimit:(BOOL)limit;	// 0x2c6c1
// declared property getter: - (BOOL)hasNumFeatureLimit;	// 0x2c6b1
- (void)writeTo:(id)to;	// 0x2c575
- (BOOL)readFrom:(id)from;	// 0x2c38d
- (id)dictionaryRepresentation;	// 0x2c231
- (id)description;	// 0x2c1c1
// declared property setter: - (void)setAddressLinesLimit:(int)limit;	// 0x2c19d
// declared property getter: - (int)addressLinesLimit;	// 0x2c179
// declared property getter: - (BOOL)hasBoundingBox;	// 0x2c161
// declared property setter: - (void)setIncludeBoundingBoxes:(BOOL)boxes;	// 0x2c13d
// declared property getter: - (BOOL)includeBoundingBoxes;	// 0x2c119
// declared property setter: - (void)setNumFeatureLimit:(unsigned)limit;	// 0x2c0f5
// declared property getter: - (unsigned)numFeatureLimit;	// 0x2c0d1
- (void)dealloc;	// 0x2c08d
@end