//
//     Generated by private class-dump
//

@class NSError, TMNetworkControlActionResult, NSDictionary;

@interface TMNetworkControlBlockContent : NSObject {
    TMNetworkControlActionResult *_actionResult;
    NSError *_actionError;
    NSDictionary *_extraInfo;
}

@property (retain, nonatomic) TMNetworkControlActionResult *actionResult;
@property (retain, nonatomic) NSError *actionError;
@property (retain, nonatomic) NSDictionary *extraInfo;

- (void)setExtraInfo:(id)arg0;
- (void)setActionError:(id)arg0;
- (id)actionError;
- (void).cxx_destruct;
- (id)actionResult;
- (id)extraInfo;
- (void)setActionResult:(id)arg0;

@end
