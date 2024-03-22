//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;

@interface LolaDrawCommandFactory : NSObject {
    NSMutableArray *_currentDrawCommands;
    NSMutableArray *_appendDrawCommands;
    NSMutableDictionary *_commandPool;
}

@property (retain, nonatomic) NSMutableDictionary *commandPool;
@property (retain, nonatomic) NSMutableArray *currentDrawCommands;
@property (retain, nonatomic) NSMutableArray *appendDrawCommands;

+ (id)commandClassWithKey:(id)arg0;

- (void)setCurrentDrawCommands:(id)arg0;
- (id)currentDrawCommands;
- (void)createCommandsWithData:(id)arg0 context:(id)arg1 isAppend:(BOOL)arg2;
- (id)appendDrawCommands;
- (void)recycle:(id)arg0;
- (id)translateCommand:(id)arg0 context:(id)arg1;
- (id)getCommandFromPool:(id)arg0;
- (id)commandPool;
- (void)doRecyleCommand:(id)arg0;
- (void)setAppendDrawCommands:(id)arg0;
- (void)setCommandPool:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
