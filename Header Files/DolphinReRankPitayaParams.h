//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface DolphinReRankPitayaParams : NSObject {
    NSString *_pitayaFunctionName;
    NSDictionary *_abParams;
    NSDictionary *_clientSideParams;
    NSString *_serverSideParams;
}

@property (copy, nonatomic) NSString *pitayaFunctionName;
@property (copy, nonatomic) NSDictionary *abParams;
@property (copy, nonatomic) NSDictionary *clientSideParams;
@property (copy, nonatomic) NSString *serverSideParams;

- (id)abParams;
- (void)setAbParams:(id)arg0;
- (void)setServerSideParams:(id)arg0;
- (void)setPitayaFunctionName:(id)arg0;
- (void)setClientSideParams:(id)arg0;
- (id)pitayaFunctionName;
- (id)clientSideParams;
- (id)serverSideParams;
- (void).cxx_destruct;

@end
