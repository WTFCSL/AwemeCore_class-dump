//
//     Generated by private class-dump
//

@class NSString;

@interface AFDFeedAlbumImageLayoutConfigModel : MTLModel <MTLJSONSerializing> {
    double _fromRatio;
    double _toRatio;
    unsigned long long _topInsetType;
    unsigned long long _heightType;
    unsigned long long _contentMode;
    double _imageTopInset;
    double _textTopInset;
    double _textTopInsetType;
}

@property (nonatomic) double fromRatio;
@property (nonatomic) double toRatio;
@property (nonatomic) unsigned long long topInsetType;
@property (nonatomic) unsigned long long heightType;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) double imageTopInset;
@property (nonatomic) double textTopInset;
@property (nonatomic) double textTopInsetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentModeJSONTransformer;
+ (id)topInsetTypeJSONTransformer;
+ (id)heightTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)topInsetType;
- (double)textTopInsetType;
- (double)imageTopInset;
- (double)textTopInset;
- (double)fromRatio;
- (double)toRatio;
- (void)setFromRatio:(double)arg0;
- (void)setToRatio:(double)arg0;
- (void)setTopInsetType:(unsigned long long)arg0;
- (void)setImageTopInset:(double)arg0;
- (void)setTextTopInset:(double)arg0;
- (void)setTextTopInsetType:(double)arg0;
- (id)init;
- (void)setContentMode:(unsigned long long)arg0;
- (unsigned long long)contentMode;
- (unsigned long long)heightType;
- (void)setHeightType:(unsigned long long)arg0;

@end