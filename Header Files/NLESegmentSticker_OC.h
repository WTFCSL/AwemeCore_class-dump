//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NLEStyStickerAnimation_OC;

@interface NLESegmentSticker_OC : NLESegment_OC {
    NLEStyStickerAnimation_OC *_stickerAnimation;
}

@property (copy, nonatomic) NSString *douyin;
@property (nonatomic) unsigned long long stickerType;
@property (retain, nonatomic) NSMutableDictionary *extraDict;
@property (nonatomic) struct shared_ptr<cut::model::NLESegmentSticker> { struct NLESegmentSticker *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) float alpha;
@property (copy, nonatomic) NSString *effectInfo;
@property (retain, nonatomic) NLEStyStickerAnimation_OC *stickerAnimation;

- (void)setStickerType:(unsigned long long)arg0;
- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentSticker> { struct NLESegmentSticker *x0; struct __shared_weak_count *x1; })arg0;
- (void)setInfoStringList:(id)arg0;
- (id)getInfoStringList;
- (id)stickerAnimation;
- (void)setStickerAnimation:(id)arg0;
- (void)setEffectInfo:(id)arg0;
- (id)effectInfo;
- (id)douyin;
- (void)setDouyin:(id)arg0;
- (unsigned long long)getType;
- (id)init;
- (void).cxx_destruct;
- (void)setAlpha:(float)arg0;
- (float)alpha;
- (unsigned long long)stickerType;

@end
