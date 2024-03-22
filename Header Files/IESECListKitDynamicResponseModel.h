//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSError;

@interface IESECListKitDynamicResponseModel : NSObject {
    BOOL _isMain;
    NSString *_apiKey;
    NSDictionary *_paramsFromClient;
    NSError *_error;
    id _responseData;
}

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSDictionary *paramsFromClient;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isMain;
@property (retain, nonatomic) id responseData;

+ (id)responseModelWithData:(id)arg0 error:(id)arg1;

- (void)setIsMain:(BOOL)arg0;
- (id)paramsFromClient;
- (void)setParamsFromClient:(id)arg0;
- (void)setResponseData:(id)arg0;
- (id)responseData;
- (void).cxx_destruct;
- (void)setError:(id)arg0;
- (id)error;
- (BOOL)isMain;
- (void)setApiKey:(id)arg0;
- (id)apiKey;

@end