//
//     Generated by private class-dump
//

@interface IESECPageInterfaceHelper : NSObject {
    BOOL _isEnableRecord;
    long long _interfaceCounts;
}

@property (nonatomic) long long interfaceCounts;
@property (nonatomic) BOOL isEnableRecord;

- (BOOL)isEnableRecord;
- (void)cancelValidInterface;
- (BOOL)isValidInterface;
- (void)setIsEnableRecord:(BOOL)arg0;
- (void)recordValidInterface;
- (long long)interfaceCounts;
- (void)setInterfaceCounts:(long long)arg0;
- (void)resetValidInterface;
- (id)init;

@end
