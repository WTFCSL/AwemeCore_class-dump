//
//     Generated by private class-dump
//

@class NSString, NSDictionary, IESECBTMModel;

@interface IESECLiveClickAction : NSObject {
    BOOL _showDisclaimer;
    NSString *_schema;
    id /* block */ _willExecute;
    id /* block */ _didExecute;
    NSDictionary *_extraInfo;
    IESECBTMModel *_btmModel;
}

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL showDisclaimer;
@property (copy, nonatomic) id /* block */ willExecute;
@property (copy, nonatomic) id /* block */ didExecute;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (retain, nonatomic) IESECBTMModel *btmModel;

- (void)setExtraInfo:(id)arg0;
- (id)btmModel;
- (void)setBtmModel:(id)arg0;
- (void)setWillExecute:(id /* block */)arg0;
- (void)setDidExecute:(id /* block */)arg0;
- (id /* block */)willExecute;
- (id /* block */)didExecute;
- (void)setSchema:(id)arg0;
- (void).cxx_destruct;
- (id)schema;
- (id)extraInfo;
- (BOOL)showDisclaimer;
- (void)setShowDisclaimer:(BOOL)arg0;

@end
