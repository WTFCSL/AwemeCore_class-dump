//
//     Generated by private class-dump
//

@class RACSignal, NSString, RACSubject;

@interface ACCStickerSearchViewModel : NSObject <ACCSearchStickerServiceProtocol> {
    RACSignal *_addSearchedStickerSignal;
    RACSubject *_addSearchedStickerSubject;
    RACSignal *_configPannelStatusSignal;
    RACSubject *_configPannelStatusSubject;
}

@property (retain, nonatomic) RACSignal *addSearchedStickerSignal;
@property (retain, nonatomic) RACSubject *addSearchedStickerSubject;
@property (retain, nonatomic) RACSignal *configPannelStatusSignal;
@property (retain, nonatomic) RACSubject *configPannelStatusSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addSearchedStickerSignal;
- (id)configPannelStatusSignal;
- (void)addSearchSticker:(id)arg0 path:(id)arg1 completion:(id /* block */)arg2;
- (void)configPannlStatus:(BOOL)arg0;
- (id)addSearchedStickerSubject;
- (id)configPannelStatusSubject;
- (void)setAddSearchedStickerSignal:(id)arg0;
- (void)setAddSearchedStickerSubject:(id)arg0;
- (void)setConfigPannelStatusSignal:(id)arg0;
- (void)setConfigPannelStatusSubject:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
