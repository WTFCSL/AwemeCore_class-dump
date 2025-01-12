//
//     Generated by private class-dump
//

@class NSDictionary, AWEInTodayPlayerGridHandler, NSObject;
@protocol AWEMemoriesPlayerDataControllerProtocol;

@interface AWEInTodayPlayerScreenObserver : NSObject {
    AWEInTodayPlayerGridHandler *_gridHandler;
    NSObject<AWEMemoriesPlayerDataControllerProtocol> *_dataController;
    NSDictionary *_defaultParams;
}

@property (copy, nonatomic) NSDictionary *defaultParams;
@property (weak, nonatomic) AWEInTodayPlayerGridHandler *gridHandler;
@property (weak, nonatomic) NSObject<AWEMemoriesPlayerDataControllerProtocol> *dataController;

- (void)setDataController:(id)arg0;
- (id)defaultParams;
- (void)setDefaultParams:(id)arg0;
- (void)screenCapturedDidChange:(id)arg0;
- (void)observeScreenShot;
- (void)observeScreenRecord;
- (void)userDidTakeScreenShot:(id)arg0;
- (id)gridHandler;
- (void)setGridHandler:(id)arg0;
- (void)run;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataController;

@end
