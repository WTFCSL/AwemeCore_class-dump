//
//     Generated by private class-dump
//

@class NSString, NLEStyleText_OC;

@interface NLETextTemplateClip_OC : NLENode_OC {
    NSString *_content;
    NLEStyleText_OC *_contentStyle;
}

@property (nonatomic) struct shared_ptr<cut::model::NLETextTemplateClip> { struct NLETextTemplateClip *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long index;
@property (retain, nonatomic) NLEStyleText_OC *contentStyle;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLETextTemplateClip> { struct NLETextTemplateClip *x0; struct __shared_weak_count *x1; })arg0;
- (void)setIndex:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)content;
- (long long)index;
- (void)setContent:(id)arg0;
- (id)contentStyle;
- (void)setContentStyle:(id)arg0;

@end
