//
//     Generated by private class-dump
//

@class NSString, AWEAwemeModel;

@interface AWEAdWebviewInfo : NSObject {
    BOOL _shouldLoadSimilarRecommendAd;
    BOOL _isSimilarEntry;
    AWEAwemeModel *_model;
    NSString *_refer;
}

@property (nonatomic) BOOL isSimilarEntry;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *refer;
@property (nonatomic) BOOL shouldLoadSimilarRecommendAd;

- (void)setRefer:(id)arg0;
- (id)refer;
- (id)initWithAwemeModel:(id)arg0 refer:(id)arg1 isSimilarEntry:(BOOL)arg2;
- (BOOL)shouldLoadSimilarRecommendAd;
- (void)setShouldLoadSimilarRecommendAd:(BOOL)arg0;
- (BOOL)isSimilarEntry;
- (void)setIsSimilarEntry:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end
