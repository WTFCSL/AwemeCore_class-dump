//
//     Generated by private class-dump
//

@class GXCache;

@interface GXCacheCenter : NSObject {
    GXCache *_regularCahche;
    GXCache *_templateCahche;
    GXCache *_expressionCahche;
}

@property (retain, nonatomic) GXCache *regularCahche;
@property (retain, nonatomic) GXCache *templateCahche;
@property (retain, nonatomic) GXCache *expressionCahche;

+ (id)defaulCenter;

- (id)templateCahche;
- (id)expressionCahche;
- (id)regularCahche;
- (void)setRegularCahche:(id)arg0;
- (void)setTemplateCahche:(id)arg0;
- (void)setExpressionCahche:(id)arg0;
- (void).cxx_destruct;

@end
