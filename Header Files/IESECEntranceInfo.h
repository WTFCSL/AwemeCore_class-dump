//
//     Generated by private class-dump
//

@class NSString, IESECEntranceInfoScene, NSDictionary, NSMutableSet, IESECEntranceInfoChecker;

@interface IESECEntranceInfo : NSObject <IESECEntranceInfo> {
    NSDictionary *_entranceData;
    NSMutableSet *_putKeys;
    NSMutableSet *_removeKeys;
    BOOL _hasModified;
    IESECEntranceInfoScene *_entranceInfoScene;
    IESECEntranceInfoChecker *_checker;
}

@property (retain, nonatomic) IESECEntranceInfoScene *entranceInfoScene;
@property (nonatomic) BOOL hasModified;
@property (retain, nonatomic) IESECEntranceInfoChecker *checker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setChecker:(id)arg0;
- (id)entranceInfoString;
- (id)entranceInfoDict;
- (BOOL)hasModified;
- (id)entranceInfoScene;
- (id)objValueForKey:(id)arg0;
- (id)initWithEntranceInfoScene:(id)arg0 originDict:(id)arg1;
- (void)entrance_setValue:(id)arg0 forKey:(id)arg1;
- (void)setEntranceInfoScene:(id)arg0;
- (void)setHasModified:(BOOL)arg0;
- (BOOL)boolValueForKey:(id)arg0;
- (void).cxx_destruct;
- (id)numberValueForKey:(id)arg0;
- (id)stringValueForKey:(id)arg0;
- (long long)integerValueForKey:(id)arg0;
- (id)checker;

@end
