//
//     Generated by private class-dump
//

@class NSString;

@interface BDREGraphNodeBuilder : NSObject <BDREGraphNodeBuilderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)buildNodeWithGraph:(id)arg0 treeNode:(id)arg1 index:(long long)arg2;
- (id)innerBuildNodeWithGraph:(id)arg0 treeNode:(id)arg1 index:(long long)arg2;
- (BOOL)buildBasicCheckWithOpName:(id)arg0 treeNode:(id)arg1;

@end