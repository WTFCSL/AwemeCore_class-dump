//
//     Generated by private class-dump
//

@class IESECListKitCardPreloaderModel;

@protocol IESECListKitCardPreloaderTask

@property unsigned long long state;
@property (retain, nonatomic) IESECListKitCardPreloaderModel *model;

- (void)startWithCompleteBlock:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (unsigned long long)state;
- (id)model;
- (void)setState:(unsigned long long)arg0;

@end
