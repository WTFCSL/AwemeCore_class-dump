//
//     Generated by private class-dump
//

@class NSString, ILAScoreInfo, NSArray;

@interface ILAScanResult : NSObject {
    BOOL _isBigLeader;
    BOOL _isPorn;
    NSString *_assetId;
    long long _frame;
    ILAScoreInfo *_scoreInfo;
    NSArray *_clip128Info;
    NSArray *_similarFeature;
    NSArray *_tagsInfo;
    NSArray *_faces;
}

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long frame;
@property (retain, nonatomic) ILAScoreInfo *scoreInfo;
@property (copy, nonatomic) NSArray *clip128Info;
@property (copy, nonatomic) NSArray *similarFeature;
@property (copy, nonatomic) NSArray *tagsInfo;
@property (nonatomic) BOOL isBigLeader;
@property (nonatomic) BOOL isPorn;
@property (retain, nonatomic) NSArray *faces;

- (id)initWithOriginResult:(struct shared_ptr<ILASDK::ScanResult> { struct ScanResult *x0; struct __shared_weak_count *x1; })arg0;
- (id)clip128Info;
- (void)setClip128Info:(id)arg0;
- (id)similarFeature;
- (void)setSimilarFeature:(id)arg0;
- (id)tagsInfo;
- (void)setTagsInfo:(id)arg0;
- (BOOL)isBigLeader;
- (void)setIsBigLeader:(BOOL)arg0;
- (BOOL)isPorn;
- (void)setIsPorn:(BOOL)arg0;
- (id)faces;
- (void).cxx_destruct;
- (id)assetId;
- (void)setAssetId:(id)arg0;
- (void)setFrame:(long long)arg0;
- (void)setFaces:(id)arg0;
- (long long)frame;
- (id)scoreInfo;
- (void)setScoreInfo:(id)arg0;

@end