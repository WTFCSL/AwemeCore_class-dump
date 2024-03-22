//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface APCDTOToolsBar : MTLModel <MTLJSONSerializing> {
    NSArray *_allowList;
    NSArray *_blockList;
}

@property (copy, nonatomic) NSArray *allowList;
@property (copy, nonatomic) NSArray *blockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)arg0;
- (void).cxx_destruct;
- (id)allowList;
- (void)setAllowList:(id)arg0;
- (void)setBlockList:(id)arg0;
- (id)blockList;

@end
