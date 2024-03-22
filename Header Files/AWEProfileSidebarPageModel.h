//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWEProfileSidebarPageModel : MTLModel <MTLJSONSerializing> {
    NSArray *_blockList;
    NSString *_title;
}

@property (retain, nonatomic) NSArray *blockList;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)blockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (void)setBlockList:(id)arg0;
- (id)blockList;

@end
