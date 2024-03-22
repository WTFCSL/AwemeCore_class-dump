//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface FPStateFlow : NSObject {
    id _readState;
    id _readwriteState;
    NSMutableDictionary *_observers;
}

@property (retain, nonatomic) id readState;
@property (retain, nonatomic) id readwriteState;
@property (retain, nonatomic) NSMutableDictionary *observers;

+ (id)from:(id)arg0;

- (id)readState;
- (id)readwriteState;
- (void)setReadState:(id)arg0;
- (void)setReadwriteState:(id)arg0;
- (id)initWithState:(id)arg0;
- (void).cxx_destruct;
- (id)observers;
- (void)setObservers:(id)arg0;
- (id)observeKeyPath:(id)arg0;

@end
