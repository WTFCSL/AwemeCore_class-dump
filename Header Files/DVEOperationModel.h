//
//     Generated by private class-dump
//

@class NSError, NSString;

@interface DVEOperationModel : NSObject {
    unsigned long long _resultCode;
    NSString *_opName;
}

@property (retain, nonatomic) NSError *dve_error;
@property (nonatomic) BOOL dve_isReallyReverse;
@property (nonatomic) unsigned long long resultCode;
@property (copy, nonatomic) NSString *opName;

+ (id)dve_modelWithResultCode:(unsigned long long)arg0 error:(id)arg1;
+ (id)modelWithOpName:(id)arg0 resultCode:(unsigned long long)arg1;
+ (id)modelWithResultCode:(unsigned long long)arg0;

- (void)setDve_error:(id)arg0;
- (id)dve_error;
- (id)opName;
- (BOOL)dve_isReallyReverse;
- (void)setDve_isReallyReverse:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setOpName:(id)arg0;
- (unsigned long long)resultCode;
- (void)setResultCode:(unsigned long long)arg0;

@end
