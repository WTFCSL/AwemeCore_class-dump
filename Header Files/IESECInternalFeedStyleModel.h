//
//     Generated by private class-dump
//

@class IESECInternalFlowMainCardStyleModel, IESECInternalFlowFeedCardStyleModel, NSString, IESECInternalFlowPageStyleModel;

@interface IESECInternalFeedStyleModel : MTLModel <MTLJSONSerializing> {
    IESECInternalFlowPageStyleModel *_innerFlowPageStyle;
    IESECInternalFlowMainCardStyleModel *_innerFlowMainPageStyle;
    IESECInternalFlowFeedCardStyleModel *_innerFlowFeedPageStyle;
}

@property (retain, nonatomic) IESECInternalFlowPageStyleModel *innerFlowPageStyle;
@property (retain, nonatomic) IESECInternalFlowMainCardStyleModel *innerFlowMainPageStyle;
@property (retain, nonatomic) IESECInternalFlowFeedCardStyleModel *innerFlowFeedPageStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)innerFlowPageStyle;
- (id)innerFlowFeedPageStyle;
- (void)setInnerFlowPageStyle:(id)arg0;
- (id)innerFlowMainPageStyle;
- (void)setInnerFlowMainPageStyle:(id)arg0;
- (void)setInnerFlowFeedPageStyle:(id)arg0;
- (void).cxx_destruct;

@end