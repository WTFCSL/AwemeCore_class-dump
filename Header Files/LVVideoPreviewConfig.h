//
//     Generated by private class-dump
//

@interface LVVideoPreviewConfig : NSObject {
    struct shared_ptr<CutSame::VideoPreviewConfig> { struct VideoPreviewConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) BOOL loop;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VideoPreviewConfig> { struct VideoPreviewConfig *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::VideoPreviewConfig> { struct VideoPreviewConfig *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::VideoPreviewConfig> { struct VideoPreviewConfig *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id).cxx_construct;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg0;

@end