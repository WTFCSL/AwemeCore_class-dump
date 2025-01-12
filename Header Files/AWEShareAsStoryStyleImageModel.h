//
//     Generated by private class-dump
//

@class NSString, AWEShareAsStoryStyleFrameModel;

@interface AWEShareAsStoryStyleImageModel : NSObject {
    NSString *_path;
    AWEShareAsStoryStyleFrameModel *_frameModel;
}

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) AWEShareAsStoryStyleFrameModel *frameModel;

+ (id)modelCustomPropertyMapper;
+ (id)initWithPath:(id)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;

- (id)frameModel;
- (void)setFrameModel:(id)arg0;
- (void)setPath:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)initWithPath:(id)arg0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg1;

@end
