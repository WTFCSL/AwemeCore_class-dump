//
//     Generated by private class-dump
//

@class NSString, IESEffectModel, AWEURLModel;

@interface AWEStickerModelRankWrapper : NSObject {
    BOOL _isFavorited;
    IESEffectModel *_effect;
    NSString *_designerName;
    AWEURLModel *_avatarURLModel;
    long long _useCount;
}

@property (retain, nonatomic) IESEffectModel *effect;
@property (copy, nonatomic) NSString *designerName;
@property (copy, nonatomic) AWEURLModel *avatarURLModel;
@property (nonatomic) long long useCount;
@property (nonatomic) BOOL isFavorited;

+ (id)wrapperWithEffect:(id)arg0 designer:(id)arg1;

- (void)setAvatarURLModel:(id)arg0;
- (id)designerName;
- (void)setIsFavorited:(BOOL)arg0;
- (void)setDesignerName:(id)arg0;
- (id)avatarURLModel;
- (id)effect;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)setUseCount:(long long)arg0;
- (long long)useCount;
- (BOOL)isFavorited;

@end
