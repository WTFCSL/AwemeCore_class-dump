//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWEHomePageBubbleContentFactory : NSObject <AWEHomePageBubbleContentFactoryProtocol> {
    NSMutableDictionary *_typeToRegisterConfig;
}

@property (retain, nonatomic) NSMutableDictionary *typeToRegisterConfig;

+ (Class)aAWEHomePageBubbleContentFactoryDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (id)getContentViewWithContentConfig:(id)arg0;
- (void)registerAllBubbleContent;
- (id)typeToRegisterConfig;
- (void)registerBubbleContentWithConfig:(id)arg0;
- (id)aAWEHomePageBubbleContentFactoryDOUYINLiteAdapter;
- (void)setTypeToRegisterConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
