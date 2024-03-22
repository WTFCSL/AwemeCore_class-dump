//
//     Generated by private class-dump
//

@class NSMutableArray, NSString, NSDictionary, YataContainerItemModel, YataDataItemModel;

@interface YataNodeInfoData : NSObject {
    YataDataItemModel *_nodeData;
    YataContainerItemModel *_nodeContainer;
    NSMutableArray *_nodeChildrenKey;
    NSDictionary *_globalData;
    NSString *_key;
}

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) YataDataItemModel *nodeData;
@property (retain, nonatomic) YataContainerItemModel *nodeContainer;
@property (retain, nonatomic) NSMutableArray *nodeChildrenKey;
@property (retain, nonatomic) NSDictionary *globalData;

+ (BOOL)isDeprecatedChildren:(id)arg0;
+ (id)distinctChildrenNode:(id)arg0;
+ (id)buildNewChildrenKeys:(id)arg0 childrenKeys:(id)arg1 nodeContext:(id)arg2;

- (id)globalData;
- (void)setGlobalData:(id)arg0;
- (id)nodeContainer;
- (void)setNodeContainer:(id)arg0;
- (id)nodeChildrenKey;
- (void)setNodeChildrenKey:(id)arg0;
- (id)initWithNodeKey:(id)arg0 nodeContext:(id)arg1;
- (void)checkAndUpdateNodeInfo:(id)arg0;
- (id)key;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (void)clear;
- (id)nodeData;
- (void)setNodeData:(id)arg0;

@end