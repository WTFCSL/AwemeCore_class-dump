//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface PIAMessageHash : NSObject {
    NSMutableDictionary *dic;
}

@property (retain, nonatomic) NSMutableDictionary *dic;

- (id)dic;
- (void)setDic:(id)arg0;
- (void)registerMessage:(id)arg0 forKey:(id)arg1;
- (void)unregisterKeyMessage:(id)arg0;
- (id)getObserversArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
