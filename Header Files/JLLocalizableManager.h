//
//     Generated by private class-dump
//

@class NSString, JLNFCMessageModel;

@interface JLLocalizableManager : NSObject {
    JLNFCMessageModel *_currentModel;
    NSString *_leLanguages;
}

@property (copy, nonatomic) NSString *leLanguages;
@property (retain, nonatomic) JLNFCMessageModel *currentModel;

+ (id)sharedInstance;

- (id)leLanguages;
- (void)setLeLanguages:(id)arg0;
- (void).cxx_destruct;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;

@end
