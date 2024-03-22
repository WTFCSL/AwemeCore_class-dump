//
//     Generated by private class-dump
//

@class GXNodeTreeCreator, NSMutableDictionary;

@interface GXLayoutManager : NSObject {
    GXNodeTreeCreator *_creator;
    NSMutableDictionary *_templateCache;
}

@property (retain, nonatomic) GXNodeTreeCreator *creator;
@property (retain, nonatomic) NSMutableDictionary *templateCache;

- (BOOL)computeAndApplyLayout:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)arg0 measureSize:(struct CGSize { double x0; double x1; })arg1;
- (id)creatTemplateContext:(id)arg0 measureSize:(struct CGSize { double x0; double x1; })arg1;
- (id)computeLayout:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeWithTemplateItem:(id)arg0 measureSize:(struct CGSize { double x0; double x1; })arg1 data:(id)arg2;
- (void).cxx_destruct;
- (id)templateCache;
- (void)setTemplateCache:(id)arg0;
- (id)creator;
- (void)setCreator:(id)arg0;

@end