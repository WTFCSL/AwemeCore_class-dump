//
//     Generated by private class-dump
//

@class NSString;

@interface VEAlgorithmSessionResultScanScript : NSObject {
    BOOL _label_is_valid;
    float _prob;
    float _track_id;
    NSString *_label;
    NSString *_firstLevelLabel;
    NSString *_secondLevelLabel;
    NSString *_wikiId;
    void *_srcImageData;
    struct CGPoint { double x; double y; } _center;
    struct CGSize { double width; double height; } _srcSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _box;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } box;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) float prob;
@property (nonatomic) BOOL label_is_valid;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *firstLevelLabel;
@property (retain, nonatomic) NSString *secondLevelLabel;
@property (retain, nonatomic) NSString *wikiId;
@property (nonatomic) float track_id;
@property (nonatomic) void *srcImageData;
@property (nonatomic) struct CGSize { double width; double height; } srcSize;

- (BOOL)label_is_valid;
- (void)setLabel_is_valid:(BOOL)arg0;
- (id)firstLevelLabel;
- (void)setFirstLevelLabel:(id)arg0;
- (id)secondLevelLabel;
- (void)setSecondLevelLabel:(id)arg0;
- (id)wikiId;
- (void)setWikiId:(id)arg0;
- (float)track_id;
- (void)setTrack_id:(float)arg0;
- (void *)srcImageData;
- (void)setSrcImageData:(void *)arg0;
- (struct CGSize { double x0; double x1; })srcSize;
- (void)setSrcSize:(struct CGSize { double x0; double x1; })arg0;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })arg0;
- (id)label;
- (struct CGPoint { double x0; double x1; })center;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })box;
- (void)setBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (float)prob;
- (void)setProb:(float)arg0;

@end