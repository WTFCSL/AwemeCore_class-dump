//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface FurionRegisterManager : NSObject {
    NSMutableDictionary *_registerInfoMaps;
}

@property (retain, nonatomic) NSMutableDictionary *registerInfoMaps;

- (void)registerFactorGroup:(id)arg0 bizInfo:(id)arg1 error:(id *)arg2;
- (void)registerCombineFactor:(id)arg0 bizInfo:(id)arg1 error:(id *)arg2;
- (id)registerInfoMaps;
- (void)setRegisterInfoMaps:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
