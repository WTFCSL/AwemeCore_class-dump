//
//     Generated by private class-dump
//

@class NSString;

@interface AWENearbyGeneralGuideDoubleCheckRspModel : MTLModel <MTLJSONSerializing> {
    BOOL _receiveBubbleDataValid;
    NSString *_updateBubbleData;
}

@property (nonatomic) BOOL receiveBubbleDataValid;
@property (copy, nonatomic) NSString *updateBubbleData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (BOOL)receiveBubbleDataValid;
- (void)setReceiveBubbleDataValid:(BOOL)arg0;
- (id)updateBubbleData;
- (void)setUpdateBubbleData:(id)arg0;
- (void).cxx_destruct;

@end
