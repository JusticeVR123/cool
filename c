local ScreenGui = Instance.new("ScreenGui")
local Main = Instance.new("Frame")
local FakeRaid = Instance.new("TextButton")
local Name = Instance.new("TextLabel")
local Lag = Instance.new("TextButton")
local kickgui = Instance.new("TextButton")
local REDSKY = Instance.new("TextButton")

--Properties:

ScreenGui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
ScreenGui.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

Main.Name = "Main"
Main.Parent = ScreenGui
Main.BackgroundColor3 = Color3.fromRGB(83, 0, 1)
Main.BorderColor3 = Color3.fromRGB(0, 0, 0)
Main.BorderSizePixel = 0
Main.Position = UDim2.new(0.0153007768, 0, 0.388235301, 0)
Main.Size = UDim2.new(0, 429, 0, 325)

FakeRaid.Name = "Fake Raid"
FakeRaid.Parent = Main
FakeRaid.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
FakeRaid.BackgroundTransparency = 1.000
FakeRaid.BorderColor3 = Color3.fromRGB(0, 0, 0)
FakeRaid.BorderSizePixel = 0
FakeRaid.Size = UDim2.new(0, 200, 0, 50)
FakeRaid.Font = Enum.Font.Unknown
FakeRaid.Text = "Fake Raid (press once or it looks fake)"
FakeRaid.TextColor3 = Color3.fromRGB(209, 0, 3)
FakeRaid.TextSize = 14.000

Name.Name = "Name"
Name.Parent = Main
Name.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Name.BackgroundTransparency = 1.000
Name.BorderColor3 = Color3.fromRGB(0, 0, 0)
Name.BorderSizePixel = 0
Name.Position = UDim2.new(0, 0, 0.923076808, 0)
Name.Size = UDim2.new(0, 429, 0, 24)
Name.Font = Enum.Font.Unknown
Name.Text = "c00lkidxtubers93 gui"
Name.TextColor3 = Color3.fromRGB(0, 0, 0)
Name.TextSize = 14.000

Lag.Name = "Lag"
Lag.Parent = Main
Lag.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
Lag.BackgroundTransparency = 1.000
Lag.BorderColor3 = Color3.fromRGB(0, 0, 0)
Lag.BorderSizePixel = 0
Lag.Position = UDim2.new(0, 0, 0.213175148, 0)
Lag.Size = UDim2.new(0, 200, 0, 50)
Lag.Font = Enum.Font.Unknown
Lag.Text = "Lag"
Lag.TextColor3 = Color3.fromRGB(209, 0, 3)
Lag.TextSize = 14.000

kickgui.Name = "kick gui"
kickgui.Parent = Main
kickgui.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
kickgui.BackgroundTransparency = 1.000
kickgui.BorderColor3 = Color3.fromRGB(0, 0, 0)
kickgui.BorderSizePixel = 0
kickgui.Position = UDim2.new(0, 0, 0.367021292, 0)
kickgui.Size = UDim2.new(0, 200, 0, 50)
kickgui.Font = Enum.Font.Unknown
kickgui.Text = "kick gui"
kickgui.TextColor3 = Color3.fromRGB(209, 0, 3)
kickgui.TextSize = 14.000

REDSKY.Name = "RED SKY"
REDSKY.Parent = Main
REDSKY.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
REDSKY.BackgroundTransparency = 1.000
REDSKY.BorderColor3 = Color3.fromRGB(0, 0, 0)
REDSKY.BorderSizePixel = 0
REDSKY.Position = UDim2.new(0, 0, 0.545482814, 0)
REDSKY.Size = UDim2.new(0, 200, 0, 50)
REDSKY.Font = Enum.Font.Unknown
REDSKY.Text = "RED SKY"
REDSKY.TextColor3 = Color3.fromRGB(209, 0, 3)
REDSKY.TextSize = 14.000

-- Scripts:

local function JYXXQ_fake_script() -- FakeRaid.LocalScript 
	local script = Instance.new('LocalScript', FakeRaid)

	local message = "GOOFY AHH UNCLE PRODUCTIONS"
	local message2 = "L BOZO"
	local message3 = "IMAGINE PLAYING THIS GAME"
	local message4 = "YOU ALL SUCK"
	local message5 = "WE CAME BACK😈"
	local message6 = "GO BACK TO PLAYING ADOPT ME KIDS"
	local message7 = "GO BACK TO WORK AT A PIZZA PLACE IN 2014"
	local message8 = "This server is going to shutdown in 10 minutes"
	local prefix = "Tubers93: "
	local prefix2 = "C00lkid: "
	local tubersjoin = "Your friend Tubers93 has joined the experience"
	local coolkidjoin = "Your friend c00lkid has joined the experience"
	local prefix3 = "Server: "
	
	script.Parent.MouseButton1Click:Connect(function()
	
	game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(tubersjoin)
	wait(1)
	game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(coolkidjoin)
	wait(1)
	while true do
	game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage("The chat filter is currently experiencing issues and messages may be slow to appear.")
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix..message)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix2..message2)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix..message3)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix2..message4)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix..message6)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix2..message7)
		wait(1)
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix..message5)
		wait()
		game.TextChatService.TextChannels.RBXGeneral:DisplaySystemMessage(prefix2..message5)	
		end
	end)
end
coroutine.wrap(JYXXQ_fake_script)()
local function PXOSFZ_fake_script() -- Lag.LocalScript 
	local script = Instance.new('LocalScript', Lag)

	script.Parent.MouseButton1Click:Connect(function()
		local newpart = Instance.new("Part")
		while true do
			newpart.Transparency = 1
		end
	end)
end
coroutine.wrap(PXOSFZ_fake_script)()
local function SECVJ_fake_script() -- kickgui.LocalScript 
	local script = Instance.new('LocalScript', kickgui)

	local KICK_MESSAGE = "im in your house, hide now."
	
	-- Create GUI
	script.Parent.MouseButton1Click:Connect(function()
		
		local gui = Instance.new("ScreenGui")
		gui.Name = "Kick GUI"
	
		local frame = Instance.new("Frame")
		frame.Size = UDim2.new(0, 200, 0, 100)
		frame.Position = UDim2.new(-0, 0, 0.639, 0)
		frame.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
		frame.BorderSizePixel = 0
		frame.Parent = gui
	
		local label = Instance.new("TextLabel")
		label.Size = UDim2.new(1, 0, 0.5, 0)
		label.Position = UDim2.new(0, 0, 0, 0)
		label.BackgroundTransparency = 1
		label.Font = Enum.Font.SourceSans
		label.Text = "Kick a Player"
		label.TextColor3 = Color3.fromRGB(0, 0, 0)
		label.TextSize = 20
		label.Parent = frame
	
		local textBox = Instance.new("TextBox")
		textBox.Size = UDim2.new(1, -20, 0.3, 0)
		textBox.Position = UDim2.new(0, 10, 0.5, -20)
		textBox.PlaceholderText = "Enter Player Name"
		textBox.Font = Enum.Font.SourceSans
		textBox.TextColor3 = Color3.fromRGB(0, 0, 0)
		textBox.TextSize = 14
		textBox.Parent = frame
	
		local kickButton = Instance.new("TextButton")
		kickButton.Size = UDim2.new(1, -20, 0.2, 0)
		kickButton.Position = UDim2.new(0, 10, 0.8, -10)
		kickButton.BackgroundColor3 = Color3.fromRGB(255, 0, 0)
		kickButton.BorderSizePixel = 0
		kickButton.Font = Enum.Font.SourceSans
		kickButton.Text = "Kick Player"
		kickButton.TextColor3 = Color3.fromRGB(255, 255, 255)
		kickButton.TextSize = 16
		kickButton.Parent = frame
	
		-- Kick Function
		local function KickPlayer(playerName)
			local player = game.Players:FindFirstChild(playerName)
			if player then
				player:Kick(KICK_MESSAGE)
			end
		end
	
		-- Connect Kick Button to Kick Function
		kickButton.MouseButton1Click:Connect(function()
			local playerName = textBox.Text
			KickPlayer(playerName)
		end)
	
		-- Show GUI
		gui.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
	end)
end
coroutine.wrap(SECVJ_fake_script)()
local function DUWOG_fake_script() -- REDSKY.LocalScript 
	local script = Instance.new('LocalScript', REDSKY)

	script.Parent.MouseButton1Click:Connect(function()
		while true do
			local ColorCorrection = Instance.new("ColorCorrectionEffect")
			ColorCorrection.Parent = game.Lighting
			wait()
			game.Lighting.ColorCorrection.TintColor = Color3(255, 0, 4)
			game.Lighting.ColorCorrection.Saturation = 1
		end
	end)
end
coroutine.wrap(DUWOG_fake_script)()
local function KQDLA_fake_script() -- ScreenGui.Script 
	local script = Instance.new('Script', ScreenGui)

	
end
coroutine.wrap(KQDLA_fake_script)()
