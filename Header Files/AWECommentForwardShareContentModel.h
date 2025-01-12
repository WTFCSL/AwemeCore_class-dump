//
//     Generated by private class-dump
//

@class NSArray, AWECommentForwardShareContentFrameModel;

@interface AWECommentForwardShareContentModel : NSObject {
    unsigned long long _type;
    NSArray *_urlList;
    AWECommentForwardShareContentFrameModel *_frameModel;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *urlList;
@property (retain, nonatomic) AWECommentForwardShareContentFrameModel *frameModel;

+ (id)modelWithType:(unsigned long long)arg0 urlList:(id)arg1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 originalSize:(struct CGSize { double x0; double x1; })arg3;
+ (id)modelCustomPropertyMapper;

- (id)urlList;
- (void)setUrlList:(id)arg0;
- (id)frameModel;
- (void)setFrameModel:(id)arg0;
- (id)initWithType:(unsigned long long)arg0 urlList:(id)arg1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 originalSize:(struct CGSize { double x0; double x1; })arg3;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
