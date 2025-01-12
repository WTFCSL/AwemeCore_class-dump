//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWELVideoPreviewConfig : MTLModel <MTLJSONSerializing> {
    AWEURLModel *_upCover;
    AWEURLModel *_downCover;
    AWEURLModel *_backgroundCover;
}

@property (retain, nonatomic) AWEURLModel *upCover;
@property (retain, nonatomic) AWEURLModel *downCover;
@property (retain, nonatomic) AWEURLModel *backgroundCover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)upCoverJSONTransformer;
+ (id)downCoverJSONTransformer;
+ (id)backgroundCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)upCover;
- (void)setUpCover:(id)arg0;
- (id)downCover;
- (void)setDownCover:(id)arg0;
- (id)backgroundCover;
- (void)setBackgroundCover:(id)arg0;
- (void).cxx_destruct;

@end
