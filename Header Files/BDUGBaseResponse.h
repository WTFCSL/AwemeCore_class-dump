//
//     Generated by private class-dump
//

@class NSError;

@interface BDUGBaseResponse : NSObject {
    BOOL _success;
    NSError *_error;
    id _jsonObj;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id jsonObj;
@property (nonatomic) BOOL success;

- (id)jsonObj;
- (void)setJsonObj:(id)arg0;
- (void).cxx_destruct;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg0;
- (void)setError:(id)arg0;
- (id)error;

@end
