//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESDisposableArray : NSObject <IESDisposable> {
    NSArray *_disposables;
}

@property (retain) NSArray *disposables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)disposables;
- (id)initWithDisposables:(id)arg0;
- (void)setDisposables:(id)arg0;
- (void)dispose;
- (void).cxx_destruct;
- (void)dealloc;

@end
