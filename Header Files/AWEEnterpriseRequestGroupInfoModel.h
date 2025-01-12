//
//     Generated by private class-dump
//

@class NSString, AWEEnterpriseRequestTargetGroupModel;

@interface AWEEnterpriseRequestGroupInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _noValidGroups;
    NSString *_statusMsg;
    AWEEnterpriseRequestTargetGroupModel *_targetGroup;
}

@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL noValidGroups;
@property (retain, nonatomic) AWEEnterpriseRequestTargetGroupModel *targetGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (id)statusMsg;
- (void)setStatusMsg:(id)arg0;
- (BOOL)noValidGroups;
- (void)setNoValidGroups:(BOOL)arg0;
- (void).cxx_destruct;
- (id)targetGroup;
- (void)setTargetGroup:(id)arg0;

@end
